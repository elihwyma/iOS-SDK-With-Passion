/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCArticleClassification : NSObject

{
    NSString *_articleID;
}

@property (copy, nonatomic) NSString *articleID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArticleID:(id)arg1;

@end
