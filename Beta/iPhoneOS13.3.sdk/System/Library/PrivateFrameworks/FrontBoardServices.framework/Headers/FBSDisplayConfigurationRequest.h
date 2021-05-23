/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@interface FBSDisplayConfigurationRequest : NSObject <Swift>

{
    long long _overscanCompensation;
    struct CGSize _pixelSize;
    struct CGSize _nativePixelSize;
    double _refreshRate;
    long long _hdrMode;
}

@property (nonatomic, readonly) long long overscanCompensation;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) struct CGSize nativePixelSize;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) long long hdrMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
