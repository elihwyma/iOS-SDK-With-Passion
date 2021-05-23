/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject

{
    NSString *sectionIdentifier;
    NSString *actionKey;
    TableViewManager *tableManager;
}

@property (retain, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) TableViewManager *tableManager;

+ (id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2;

- (_Bool)isPrimaryRecommendation;
- (id)getSectionInfoWithLongStrings:(_Bool)arg1;
- (void)selectPrimaryRecommendation;

@end
