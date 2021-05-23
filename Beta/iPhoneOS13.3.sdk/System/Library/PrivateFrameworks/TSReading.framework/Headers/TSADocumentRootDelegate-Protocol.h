/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSString;

@protocol TSADocumentRootDelegate <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (nonatomic, readonly) NSString *documentCachePath;

@end
