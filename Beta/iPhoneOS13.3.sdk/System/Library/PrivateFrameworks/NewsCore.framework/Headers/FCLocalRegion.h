/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCLocalRegion : NSObject

{
    NSString *_identifier;
    NSArray *_tagIds;
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *tagIds;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
