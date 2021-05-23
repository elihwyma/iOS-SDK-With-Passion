/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVURLDataConsumer.h>

@class NSRegularExpression;

__attribute__((visibility("hidden")))
@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer

{
    NSRegularExpression *_regularExpression;
}

@property (nonatomic, readonly) NSRegularExpression *regularExpression;

+ (id)templateParsingRegularExpression;

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)initWithRegularExpression:(id)arg1;

@end
