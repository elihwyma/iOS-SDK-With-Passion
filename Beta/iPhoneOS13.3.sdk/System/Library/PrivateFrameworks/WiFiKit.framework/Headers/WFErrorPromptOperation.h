/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFUserPromptOperation.h>

#import <WiFiKit/Swift-Protocol.h>

@protocol WFErrorProviderContext;

@interface WFErrorPromptOperation : WFUserPromptOperation <Swift>

{
    id <WFErrorProviderContext> _context;
}

@property (retain, nonatomic) id <WFErrorProviderContext> context;
@property (nonatomic, readonly) _Bool wantsModalPresentation;

+ (id)errorPromptOperationWithContext:(id)arg1;

@end
