/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface FCArticleMetadata : NSObject

{
    NSDictionary *_dictionary;
    NSDate *_displayDate;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSDate *displayDate;
@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) _Bool isTreatedAsNew;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *shortExcerpt;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
