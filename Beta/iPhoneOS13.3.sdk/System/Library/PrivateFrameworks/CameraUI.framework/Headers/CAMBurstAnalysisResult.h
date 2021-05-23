/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CAMBurstAnalysisResult : NSObject

{
    NSString *_identifier;
    NSArray *_allAssetIdentifiers;
    NSArray *_goodAssetIdentifiers;
    NSString *_bestAssetIdentifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *allAssetIdentifiers;
@property (copy, nonatomic, readonly) NSArray *goodAssetIdentifiers;
@property (copy, nonatomic, readonly) NSString *bestAssetIdentifier;

- (id)init;
- (id)description;
- (id)initWithIdentifier:(id)arg1 allAssetIdentifiers:(id)arg2 goodAssetIdentifiers:(id)arg3 bestAssetIdentifier:(id)arg4;

@end
