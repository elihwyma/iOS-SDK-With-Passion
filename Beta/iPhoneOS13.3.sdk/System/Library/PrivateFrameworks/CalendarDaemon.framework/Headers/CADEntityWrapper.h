/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class CADObjectID, NSArray;

@interface CADEntityWrapper : NSObject

{
    int _entityType;
    int _rowID;
    NSArray *_loadedValues;
    CADObjectID *_objectID;
    _Bool _deleted;
}

@property (nonatomic, readonly) _Bool deleted;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectID;
- (id)loadedValues;
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2;
- (id)initWithCalEntity:(void *)arg1;

@end
