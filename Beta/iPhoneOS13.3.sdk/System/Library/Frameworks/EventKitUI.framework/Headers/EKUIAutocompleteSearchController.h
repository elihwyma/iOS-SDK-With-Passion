/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKUIAutocompleteSearchController : NSObject

{
    unsigned long long _maximumResultCount;
}

@property unsigned long long maximumResultCount;

+ (id)searchWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
