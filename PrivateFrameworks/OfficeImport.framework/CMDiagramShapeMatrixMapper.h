/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper  {
    int mColumnCount;
    int mRowCount;
    float mRectWidth;
    float mRectHeight;
    BOOL mHasArrows;
    BOOL mIsSnake;
    BOOL mIsHorizontal;
    BOOL mIsLinear;
}


- (double)gapRatio;
- (struct CGSize { float x1; float x2; })gapSize;
- (void)setColumnsAndRowsCount;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })circumscribedBounds;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (int)columnCount;

@end
