/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@interface ECIMAPAppendInfo : NSObject

{
    unsigned int _uidValidity;
    unsigned long long _newMessageUID;
}

@property (nonatomic) unsigned int uidValidity;
@property (nonatomic) unsigned long long newMessageUID;

@end
