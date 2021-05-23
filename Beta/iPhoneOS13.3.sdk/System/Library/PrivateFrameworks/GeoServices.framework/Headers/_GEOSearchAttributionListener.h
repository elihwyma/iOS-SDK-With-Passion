/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionListener : NSObject

{
    NSString *_identifier;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_errorHandlers;
}

@property (nonatomic, readonly) NSString *identifier;

- (void)handleError:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)handleInfo:(id)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
