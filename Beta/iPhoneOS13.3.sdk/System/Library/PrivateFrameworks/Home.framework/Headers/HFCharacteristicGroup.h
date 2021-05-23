/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface HFCharacteristicGroup : NSObject

{
    NSString *_identifier;
    NSString *_title;
    NSSet *_characteristicTypes;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long groupSortPriority;
@property (copy, nonatomic, readonly) NSSet *characteristicTypes;

+ (id)_targetCurrentStateCharacteristicTypeMap;
+ (id)_targetCurrentStateCharacteristicGroups;
+ (id)_currentTargetStateCharacteristicTypeMap;
+ (id)allCharacteristicGroups;
+ (id)groupedTitleForCharacteristicType:(id)arg1;
+ (id)characteristicGroupForCharacteristicType:(id)arg1;
+ (id)characteristicGroupForIdentifier:(id)arg1;

- (id)init;
- (id)initWithID:(id)arg1 title:(id)arg2 characteristicTypes:(id)arg3;

@end
