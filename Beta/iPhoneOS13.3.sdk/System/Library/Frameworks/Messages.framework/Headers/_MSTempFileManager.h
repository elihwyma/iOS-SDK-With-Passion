/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface _MSTempFileManager : NSObject

{
    NSHashTable *_registry;
}

@property (nonatomic, readonly) NSHashTable *registry;

+ (id)sharedInstance;

- (id)init;
- (id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2;

@end
