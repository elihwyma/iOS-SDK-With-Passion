/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject

{
    NSString *bundleID;
    struct {
        unsigned int isOwner:1;
        unsigned int canRead:1;
        unsigned int canWrite:1;
    } accessControlEntryFlags;
}

@end
