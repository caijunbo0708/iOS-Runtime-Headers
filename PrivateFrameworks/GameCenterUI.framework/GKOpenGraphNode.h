/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSError, NSURL;

@interface GKOpenGraphNode : NSObject {
    NSError *_error;
    unsigned long long _numberOfFriendLikes;
    unsigned long long _numberOfLikes;
    NSURL *_url;
    bool_liked;
}

@property(retain) NSError * error;
@property bool liked;
@property unsigned long long numberOfFriendLikes;
@property unsigned long long numberOfLikes;
@property(readonly) NSURL * url;

+ (id)openGraphNodeAccessQueue;
+ (void)openGraphNodeForURL:(id)arg1 handler:(id)arg2;

- (void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)fetchLikeStatusWithCompletionHandler:(id)arg1;
- (id)initWithOpenGraphURL:(id)arg1;
- (bool)liked;
- (unsigned long long)numberOfFriendLikes;
- (unsigned long long)numberOfLikes;
- (void)sendDislikeEventWithCompletionHandler:(id)arg1;
- (void)sendLikeEventWithCompletionHandler:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLiked:(bool)arg1;
- (void)setNumberOfFriendLikes:(unsigned long long)arg1;
- (void)setNumberOfLikes:(unsigned long long)arg1;
- (void)toggleLikeStatusWithCompletionHandler:(id)arg1;
- (id)url;

@end