/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCPersonalizationDecomposedURL : NSObject

{
    NSString *_domain;
    NSArray *_paths;
}

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSArray *paths;

- (id)initWithURL:(id)arg1;
- (id)initWithURLString:(id)arg1;

@end
