/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastPickerHostViewController : _UIRemoteViewController <RPBroadcastPickerExtensionHostProtocol> {
    RPSystemBroadcastPickerViewController * _broadcastPickerViewController;
    RPBroadcastPickerExtensionHostContext * _hostContext;
}

@property (nonatomic) RPSystemBroadcastPickerViewController *broadcastPickerViewController;
@property (nonatomic, retain) RPBroadcastPickerExtensionHostContext *hostContext;

- (void).cxx_destruct;
- (id)broadcastPickerViewController;
- (id)hostContext;
- (void)sendMessageToExtension;
- (void)setBroadcastPickerViewController:(id)arg1;
- (void)setHostContext:(id)arg1;
- (oneway void)viewControllerDidFinish;

@end