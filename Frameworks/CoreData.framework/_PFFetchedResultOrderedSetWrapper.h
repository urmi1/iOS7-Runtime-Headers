/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet  {
    int _cd_rc;
    NSArray *_underlyingArray;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)willRead;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (id)objectEnumerator;
- (unsigned int)indexOfObject:(id)arg1;
- (id)allObjects;
- (id)array;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)initWithArray:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)sortedArrayUsingComparator:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;

@end
