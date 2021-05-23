/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface REMDAShareeTombstone : NSObject

{
    NSUUID *_objectIdentifier;
    NSUUID *_owningListIdentifier;
    NSString *_displayName;
    NSString *_address;
}

@property (retain, nonatomic) NSUUID *objectIdentifier;
@property (retain, nonatomic) NSUUID *owningListIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
