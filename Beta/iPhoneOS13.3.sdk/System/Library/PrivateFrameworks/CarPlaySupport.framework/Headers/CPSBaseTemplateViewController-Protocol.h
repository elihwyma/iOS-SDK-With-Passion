/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/Swift-Protocol.h>

@class CPTemplate, NAFuture;

@protocol CPTemplateDelegate;

@protocol CPSBaseTemplateViewController <Swift>

@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id <CPTemplateDelegate> templateDelegate;
@property (nonatomic, readonly) NAFuture *templateProviderFuture;

@end
