/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPCharSequence;

@interface CPZoneMaker : NSObject  {
    CPCharSequence *charactersOnPage;
}


- (BOOL)overlap:(id)arg1 with:(id)arg2;
- (void)addObjectsToStraddler:(id)arg1 from:(id)arg2;
- (id)newZoneForStraddlersFrom:(id)arg1;
- (void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)makeZonesWithBoundaryIn:(id)arg1;
- (void)mergeQualifyingRectanglesIn:(id)arg1;
- (unsigned int)categorizeGraphicsIn:(id)arg1;
- (void)makeZonesIn:(id)arg1;
- (void)dealloc;

@end
