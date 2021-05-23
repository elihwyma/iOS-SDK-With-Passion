/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ECIMAPCopyInfo : NSObject

{
    unsigned int _uidValidity;
    NSDictionary *_sourceUIDsToDestinationUIDs;
}

@property (nonatomic) unsigned int uidValidity;
@property (retain, nonatomic) NSDictionary *sourceUIDsToDestinationUIDs;

@end
