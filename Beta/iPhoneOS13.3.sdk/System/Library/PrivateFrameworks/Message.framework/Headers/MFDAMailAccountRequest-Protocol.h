/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@protocol MFDAMailAccountRequest

@property (nonatomic, readonly) _Bool shouldSend;
@property (nonatomic, readonly) _Bool isUserRequested;

- (unsigned short)generationNumber;

@end
