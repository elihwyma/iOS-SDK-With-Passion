/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@protocol FCSectionProviding;

@interface FCEditorialOperationGroup : NSObject

{
    id <FCSectionProviding> _section;
    NSArray *_headlines;
    NSDate *_publishDate;
}

@property (retain, nonatomic) id <FCSectionProviding> section;
@property (retain, nonatomic) NSArray *headlines;
@property (retain, nonatomic) NSDate *publishDate;

@end
