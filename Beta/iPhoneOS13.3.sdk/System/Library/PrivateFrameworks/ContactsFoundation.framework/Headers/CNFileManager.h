/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSFileManager;

@interface CNFileManager : NSObject

{
    NSFileManager *_fileManager;
}

@property (nonatomic, readonly) NSFileManager *fileManager;

- (id)init;
- (id)initWithFileManager:(id)arg1;
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3;

@end
