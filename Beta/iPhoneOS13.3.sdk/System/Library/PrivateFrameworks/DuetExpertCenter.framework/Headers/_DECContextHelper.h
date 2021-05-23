/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@protocol _CDLocalContext;

@interface _DECContextHelper : NSObject

{
    id <_CDLocalContext> _context;
}

@property (nonatomic, readonly) id <_CDLocalContext> context;

+ (id)sharedInstance;

- (id)init;
- (id)fetchContextValueForKeyPath:(id)arg1;
- (void)registerForNotifications:(id)arg1;
- (id)fetchDataDictionaryForKeyPath:(id)arg1;

@end
