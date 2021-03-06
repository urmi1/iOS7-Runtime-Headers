/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, UIButton, UILabel;

@interface PLPhotoPostCommentCell : UITableViewCell  {
    UILabel *_contentLabel;
    UIButton *_addCommentButton;
    UIView *_styledSeparatorView;
}

@property(readonly) UIButton * addCommentButton;
@property(readonly) UILabel * contentLabel;
@property(readonly) UIView * styledSeparatorView;

+ (float)heightForWidth:(float)arg1;

- (id)contentLabel;
- (id)_attributedStringForPlaceholder;
- (id)styledSeparatorView;
- (void)setupContent;
- (id)addCommentButton;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
