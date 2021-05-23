/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray, NSString;

@interface PXNoContentGadgetProvider : PXGadgetProvider

{
    NSArray *_noContentGadgets;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

@property (copy, nonatomic) NSArray *noContentGadgets;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedMessage;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;

@end
