/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter_Ivars : NSObject

{
    NSDate *minimumCreationDate;
    NSDate *maximumCreationDate;
    NSDate *minimumModificationDate;
    NSDate *maximumModificationDate;
    NSArray<_SFServiceIdentifier> *serviceIdentifiers;
    NSArray *usernames;
}

@end
