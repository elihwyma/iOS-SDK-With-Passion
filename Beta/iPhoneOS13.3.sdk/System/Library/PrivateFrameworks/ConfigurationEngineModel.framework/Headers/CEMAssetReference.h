/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CEMAssetReference : NSObject

{
    int _assettype;
    NSString *_identifier;
}

@property (copy, readonly) NSString *identifier;
@property (readonly) int assettype;

+ (id)referenceForIdentifier:(id)arg1 assetschematype:(id)arg2;
+ (id)referenceForIdentifier:(id)arg1 assettype:(int)arg2;

- (id)initWithIdentifier:(id)arg1 assettype:(int)arg2;

@end
