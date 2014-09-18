/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

@interface UIWebOverflowScrollView : UIScrollView {
    DOMNode *_node;
    UIWebOverflowContentView *_overflowContentView;
    UIWebOverflowScrollListener *_scrollListener;
    UIWebBrowserView *_webBrowserView;
    bool_beingRemoved;
}

@property(getter=isBeingRemoved) bool beingRemoved;
@property(retain) DOMNode * node;
@property(retain) UIWebOverflowContentView * overflowContentView;
@property(retain) UIWebOverflowScrollListener * scrollListener;
@property UIWebBrowserView * webBrowserView;

- (void)_replaceLayer:(id)arg1;
- (void)dealloc;
- (bool)fixUpViewAfterInsertion;
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;
- (bool)isBeingRemoved;
- (id)node;
- (id)overflowContentView;
- (void)prepareForRemoval;
- (id)scrollListener;
- (void)setBeingRemoved:(bool)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNode:(id)arg1;
- (void)setOverflowContentView:(id)arg1;
- (void)setScrollListener:(id)arg1;
- (void)setWebBrowserView:(id)arg1;
- (id)superview;
- (id)webBrowserView;

@end