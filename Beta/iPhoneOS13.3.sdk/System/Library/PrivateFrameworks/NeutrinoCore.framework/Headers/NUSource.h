/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NUIdentifier;

@interface NUSource : NSObject

{
    NSString *_assetIdentifier;
}

@property (copy, nonatomic) NSString *assetIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NUIdentifier *identifier;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToSource:(id)arg1;
- (id)sourceDefinition:(out id *)arg1;

@end
