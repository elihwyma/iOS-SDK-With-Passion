/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, TUGroupTitle;

@interface TUResultGroup : NSObject

{
    TUGroupTitle *_title;
    NSMutableArray *_resultsCache;
}

@property (retain, nonatomic) TUGroupTitle *title;
@property (retain, nonatomic) NSMutableArray *resultsCache;
@property (readonly) NSArray *results;
@property (readonly) unsigned long long groupType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 results:(id)arg2;
- (void)removeSearchItem:(id)arg1;

@end
