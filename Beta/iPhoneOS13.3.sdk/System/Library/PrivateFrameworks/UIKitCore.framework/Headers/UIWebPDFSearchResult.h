/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject

{
    NSArray *rotationAngles;
    unsigned long long pageIndex;
    NSArray *strings;
    NSString *string;
    NSArray *rects;
    struct CGRect boundingBox;
}

@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct CGRect boundingBox;
@property (retain, nonatomic) NSArray *strings;
@property (retain, nonatomic) NSArray *rects;
@property (retain, nonatomic) NSArray *rotationAngles;

- (void)dealloc;

@end
