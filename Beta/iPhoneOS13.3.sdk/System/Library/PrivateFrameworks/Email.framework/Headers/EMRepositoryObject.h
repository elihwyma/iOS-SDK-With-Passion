/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObject.h>

@class EMRepository, NSString;

@interface EMRepositoryObject : EMObject

{
    EMRepository *_repository;
}

@property (retain, nonatomic) EMRepository *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
