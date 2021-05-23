/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@protocol TSWPStorageParent

@property (nonatomic, readonly) long long contentWritingDirection;

- (unsigned short)textIsVertical;
- (unsigned short)autoListRecognition;
- (unsigned short)autoListTermination;

@end
