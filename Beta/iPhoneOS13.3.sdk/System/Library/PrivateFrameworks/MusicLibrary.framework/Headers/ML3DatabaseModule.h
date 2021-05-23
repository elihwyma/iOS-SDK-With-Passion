/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ML3DatabaseModuleContext;

@interface ML3DatabaseModule : NSObject

{
    NSString *_name;
    struct sqlite3_module *_moduleMethods;
    id <ML3DatabaseModuleContext> _context;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct sqlite3_module *moduleMethods;
@property (retain, nonatomic) id <ML3DatabaseModuleContext> context;

- (id)description;
- (id)initWithName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;

@end
