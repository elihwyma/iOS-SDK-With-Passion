/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SPResultSet : NSObject

{
    NSArray *_resultSections;
    NSArray *_stableSections;
}

@property (nonatomic, readonly) NSArray *resultSections;
@property (nonatomic, readonly) NSArray *stableSections;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1;
- (id)initWithSections:(id)arg1 stableSections:(id)arg2;

@end
