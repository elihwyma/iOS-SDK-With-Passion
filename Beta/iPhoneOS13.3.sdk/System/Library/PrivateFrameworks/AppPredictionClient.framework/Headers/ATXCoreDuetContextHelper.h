/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@protocol _CDLocalContext;

@interface ATXCoreDuetContextHelper : NSObject

{
    id <_CDLocalContext> _context;
}

@property (retain, nonatomic) id <_CDLocalContext> context;

- (id)init;
- (id)fetchDataDictionaryForKeyPath:(id)arg1;

@end
