/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class NSObject, NSString;

@protocol GSAdditionStoring;

@protocol GSLibraryProtocol

@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;
@property (nonatomic, readonly) NSString *nameSpace;

- (unsigned short)generationsRemove:error: /* Error: Ran out of types for this method. */;

@end
