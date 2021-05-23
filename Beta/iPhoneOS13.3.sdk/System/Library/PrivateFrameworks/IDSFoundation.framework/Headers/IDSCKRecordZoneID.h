/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSString;

@interface IDSCKRecordZoneID : NSObject <Swift>

{
    NSString *_zoneName;
    NSString *_ownerName;
}

@property (nonatomic, readonly) NSString *zoneName;
@property (nonatomic, readonly) NSString *ownerName;

+ (id)alloc;
+ (Class)__class;

@end
