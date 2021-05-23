/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSPersistentCloudKitContainerOptions : NSObject

{
    _Bool _useEncryptedStorage;
    NSString *_containerIdentifier;
    NSString *_apsConnectionMachServiceName;
}

@property _Bool useEncryptedStorage;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;
@property (copy, readonly) NSString *containerIdentifier;

- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1;

@end
