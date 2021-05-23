/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSMessageToDelete : NSObject

{
    unsigned int _dataProtectionClass;
    NSString *_guid;
    NSString *_alternateGUID;
}

@property unsigned int dataProtectionClass;
@property (retain, setter=setGUID:) NSString *guid;
@property (retain, setter=setAlternateGUID:) NSString *alternateGUID;

@end
