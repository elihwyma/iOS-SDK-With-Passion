/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDCitationAuthor : NSObject

{
    NSString *mFirst;
    NSString *mLast;
}

@property (retain, nonatomic) NSString *first;
@property (retain, nonatomic) NSString *last;

- (id)initWithFirst:(id)arg1 last:(id)arg2;

@end
