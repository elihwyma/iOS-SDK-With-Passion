/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKDatabase, NSString;

@interface IDSCKContainer : NSObject

{
    NSString *_containerIdentifier;
    IDSCKDatabase *_privateCloudDatabase;
    IDSCKDatabase *_publicCloudDatabase;
}

@property (readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) IDSCKDatabase *privateCloudDatabase;
@property (nonatomic, readonly) IDSCKDatabase *publicCloudDatabase;

+ (id)containerWithIdentifier:(id)arg1;
+ (Class)__class;

@end
