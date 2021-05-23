/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _SFSearchRequest : NSObject

{
    long long _searchTypes;
    NSDictionary *_headerFields;
    NSDictionary *_queryParameters;
}

@property (nonatomic) long long searchTypes;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSDictionary *queryParameters;

@end
