/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView  {
    UIActivityIndicatorView *_activityIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
    BOOL _newsstandActivity;
}


- (void)dealloc;
- (int)_activityIndicatorStyle;
- (void)_startAnimating;
- (void)_stopAnimating;
- (float)shadowPadding;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(BOOL)arg1;

@end
