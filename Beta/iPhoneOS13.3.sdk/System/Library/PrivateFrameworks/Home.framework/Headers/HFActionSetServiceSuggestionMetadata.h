/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HFActionSetServiceSuggestionMetadata : NSObject

{
    NSString *_serviceType;
    NSString *_primaryCharacteristicType;
    NSArray *_secondaryCharacteristicTypes;
}

@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *primaryCharacteristicType;
@property (nonatomic, readonly) NSArray *secondaryCharacteristicTypes;

+ (id)metadataForServiceType:(id)arg1;

- (id)initWithServiceType:(id)arg1 primaryCharacteristicType:(id)arg2 secondaryCharacteristicTypes:(id)arg3;

@end
