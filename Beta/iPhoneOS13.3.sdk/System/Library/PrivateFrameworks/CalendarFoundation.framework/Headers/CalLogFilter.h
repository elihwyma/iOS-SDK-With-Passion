/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface CalLogFilter : NSObject

{
    int _minimumLevel;
    NSArray *_includes;
    NSArray *_excludes;
    NSArray *_includesAsRegexes;
    NSArray *_excludesAsRegexes;
    NSSet *_includesRegardlessOfLevel;
}

@property (retain, nonatomic) NSArray *includesAsRegexes;
@property (retain, nonatomic) NSArray *excludesAsRegexes;
@property (nonatomic) int minimumLevel;
@property (copy, nonatomic) NSArray *includes;
@property (copy, nonatomic) NSArray *excludes;
@property (copy, nonatomic) NSSet *includesRegardlessOfLevel;

- (id)init;
- (id)description;
- (_Bool)proceedProcessingLogName:(id)arg1;
- (id)generateRegexesForPatterns:(id)arg1;

@end
