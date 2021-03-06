/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiCategory, UIKeyboardEmojiInputController, UILabel;

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiInput> {
    UILabel *_optionalDescription;
    UIKeyboardEmojiCategory *_category;
    UIKeyboardEmojiInputController *_inputController;
}

@property(retain) UIKeyboardEmojiCategory * category;


- (id)category;
- (void)dealloc;
- (id)charactersForRow:(int)arg1;
- (void)setCategory:(id)arg1;
- (void)reloadForCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
