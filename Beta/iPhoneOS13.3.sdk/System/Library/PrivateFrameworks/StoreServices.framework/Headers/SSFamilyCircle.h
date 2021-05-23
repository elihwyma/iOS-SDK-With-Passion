/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface SSFamilyCircle : NSObject

{
    NSArray *_familyMembers;
    NSArray *_iTunesAccountNames;
}

@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) NSArray *iTunesAccountNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)newCacheRepresentation;
- (id)allITunesIdentifiers;
- (id)allITunesAccountNames;

@end
