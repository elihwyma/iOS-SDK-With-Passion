/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKComingSoonInfo : NSObject

{
    _Bool _comingSoon;
    NSString *_dateString;
    NSString *_dateStringShort;
    NSString *_dateFormat;
    unsigned long long _precision;
    NSString *_brandID;
}

@property (nonatomic, readonly, getter=isComingSoon) _Bool comingSoon;
@property (copy, nonatomic, readonly) NSString *dateString;
@property (copy, nonatomic, readonly) NSString *dateStringShort;
@property (copy, nonatomic, readonly) NSString *dateFormat;
@property (nonatomic, readonly) unsigned long long precision;
@property (copy, nonatomic, readonly) NSString *brandID;

+ (id)comingSoonItemsWithDictionaries:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (void)_initializeDatesStrings;
- (id)initWithDictionary:(id)arg1 brandID:(id)arg2;

@end
