/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSSet;

@interface PKAccountWebServicePhysicalCardActionResponse : PKAccountWebServiceResponse

{
    NSSet *_updatedPhysicalCards;
}

@property (nonatomic, readonly) NSSet *updatedPhysicalCards;

- (id)initWithData:(id)arg1;

@end
