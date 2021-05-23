/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSString, PXForYouPeopleQuestionsDataSource;

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider

{
    PXForYouPeopleQuestionsDataSource *_dataSource;
}

@property (retain, nonatomic) PXForYouPeopleQuestionsDataSource *dataSource;
@property (copy, nonatomic, readonly) NSString *localizedTitle;

+ (id)_gadgetForQuestion:(id)arg1;

- (id)init;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
