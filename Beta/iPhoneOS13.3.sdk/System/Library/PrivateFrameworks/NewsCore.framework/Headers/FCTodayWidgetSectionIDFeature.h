/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCTodayWidgetSectionIDFeature : FCPersonalizationFeature

{
    NSString *_sectionID;
}

@property (nonatomic, readonly) NSString *sectionID;

- (id)init;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)fc_description;
- (id)initWithSectionID:(id)arg1;

@end
