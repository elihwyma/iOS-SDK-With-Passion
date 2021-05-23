/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class MKLocalSearch, NSString;

@interface CalGeocoder : NSObject

{
    NSString *_locationString;
    CDUnknownBlockType _completionBlock;
    MKLocalSearch *_search;
}

@property (retain, nonatomic) NSString *locationString;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) MKLocalSearch *search;

+ (void)geocodeLocationString:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)cancel;
- (void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2;
- (id)initWithLocationString:(id)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startGeocoding;

@end
